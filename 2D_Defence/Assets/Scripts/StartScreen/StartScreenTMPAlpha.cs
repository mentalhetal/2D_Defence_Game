using System.Collections;
using UnityEngine;
using TMPro;

public class StartScreenTMPAlpha : MonoBehaviour
{
    [SerializeField]
    [Range(0.01f, 10f)]
    private float           fadeTime;
    private TextMeshProUGUI textStartScreen;

    private void Awake()
    {
        textStartScreen = GetComponent<TextMeshProUGUI>();

        OnFade();
    }

    public void OnFade()
    {
        StartCoroutine(FadeInOut());
    }

    private IEnumerator FadeInOut()
    {
        while(true)
        {
            yield return StartCoroutine(Fade(1, 0));

            yield return StartCoroutine(Fade(0, 1));
        }
    }

    private IEnumerator Fade(float start, float end)
    {
        float currentTime = 0.0f;
        float percent     = 0.0f;

        while(percent < 1)
        {
            currentTime += Time.deltaTime;
            percent = currentTime / fadeTime;

            Color color             = textStartScreen.color;
            color.a                 = Mathf.Lerp(start, end, percent);
            textStartScreen.color   = color;

            yield return null;
        }
    }
}
