using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragBehaviour : MonoBehaviour
{
    //[SerializeField]
    //private Canvas canvas;

    //private void Start()
    //{
    //    canvas = FindObjectOfType<Canvas>();
    //}

    //public void DragHandler(BaseEventData data)
    //{
    //    PointerEventData pointerData = (PointerEventData)data;

    //    Vector2 pos;
    //    RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)canvas.transform, pointerData.position, canvas.worldCamera, out pos);

    //    transform.position = canvas.transform.TransformPoint(pos);
    //}

    private bool isDragging;

    public void OnMouseDown()
    {
        isDragging = true;
    }

    public void OnMouseUp()
    {
        isDragging = false;
    }

    public void Update()
    {
        if(isDragging)
        {
            Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            transform.Translate(mousePos);
        }
    }
}
